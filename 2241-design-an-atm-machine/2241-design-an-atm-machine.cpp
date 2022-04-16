class ATM {
public:
    vector<long> notes;
    vector<int> value;
    ATM() {
        vector<int> _value = {20,50,100,200,500};
        vector<long> _notes(5, 0);
        notes = _notes;
        value = _value;
    }
    
    void deposit(vector<int> banknotesCount) {
        int N = banknotesCount.size();
        for(int i = 0; i < N; i++) {
            notes[i] += banknotesCount[i]; 
        }
        
    }
    
    vector<int> withdraw(int amount) {
        vector<int> res(5);
		
		// remember the current 'notes' array, so we can restore it, if needed 
        vector<long> temp = notes;   
        
		// By traversing in reverse direction on our 'value' array
		// we'll always prioritise greater values
        for(int i = 4; i >= 0; i--) {
		
			// if we have reached the required amount, then
			// dont have to proceed further, simply return 'res'
            if(amount == 0) {
                return res;
            }
			
			// if the current note is available , then we take the
			// maximum possible number of such notes
			
            if(amount >= value[i]) {
                int req = amount / value[i];
                if(notes[i] >= req) {
                    notes[i] -= req;
                    amount -= (value[i] * req);
                    res[i] += req;
                   
                }
                else {
                    res[i] += notes[i];
                    amount -= (value[i] * notes[i]);
                    notes[i] = 0;
                }
                
            }
        }
        if(amount == 0) {
            return res;
        }
		// if it is an invalid state, restore the previous 'notes' array
        notes =temp;
        return {-1};
    }
};