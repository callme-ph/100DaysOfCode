class Solution {
public:
    int romanToInt(string s) {

        int* result;
        int index = 0;
        int sum = 0;

        result = (int*) malloc(sizeof(int) * s.size());
 
        for(int i = 0; i < s.size(); i++){

            switch(s[i])
            {
                case 'M': 
                    result[index] = 1000;
                    index++;
                    break;

                case 'D': 
                    result[index] = 500;
                    index++;
                    break;

                case 'C': 
                    result[index] = 100;
                    index++;
                    break;

                case 'L': 
                    result[index] = 50;
                    index++;
                    break;

                case 'X': 
                    result[index] = 10;
                    index++;
                    break;

                case 'V': 
                    result[index] = 5;
                    index++;
                    break;

                case 'I': 
                    result[index] = 1;
                    index++;
                    break;
                
                default:
                    return 0;
            }           
        }
    
        for( int i = 1; i < s.size(); i++ ){
            if( result[i-1] < result[i] ){
                result[i] = result[i] - result[i-1];
                result[i-1] = 0;                
            }
        }

        for( int i = 0; i < s.size(); i++ ){
            sum = sum + result[i];
        }

        return sum;
    }
};
