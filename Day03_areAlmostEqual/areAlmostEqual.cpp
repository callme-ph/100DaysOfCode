class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int diff = 0;
        bool result = false;
        char diff1;
        char diff2;

        for ( int i = 0; i < s1.size(); i++ ){
            //cout << "i: " << i << " s1: " << s1[i] << " s2: " << s2[i] << "\n";

            if( s1[i] != s2[i] ) {
                diff = diff + 1; // Diff stores how many characters are different between s1 and s2. This line may be exchanged with diff++ only
                // Using diff = diff++ will not do the necessary operation.
                
                // Checks if it is the firt difference between strings and stores the different chars
                if ( diff-1 == 0 ){
                    diff1 = s1[i];
                    diff2 = s2[i];

                } else { 
                    if ( diff-1 == 1 ){ // Is it is second occurrence of different characters it will compare if those are equal to the ones stored in diff1 and diff2. It means they are exchangable.
                        if ( (s1[i] == diff2) && (s2[i] == diff1) ){
                            result = true; // If so, sets result to true;
                        }
                    } else if ( diff-1 >= 2){ // If there are more than two different characters, return false;
                        return false;
                    }
                }
            }
        }
        // Return true if there are no difference between s1 and s2 or if there are more than one difference and result are true.
        return ((result && diff != 1) || diff == 0);
    }
};
