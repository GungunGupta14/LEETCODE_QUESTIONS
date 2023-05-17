class Solution {
public:
    int countOperations(int num1, int num2) {
        if(num1 == 0 || num2 == 0) 
        return 0; 
        if(num1 == num2) 
        return 1;
        int cnt=0;
        while(true) {
        	if(num1 == 0 || num2 == 0) {
        		break;
        	}
        	if(num1 > num2)  {
        		num1 = num1 - num2;
        		cnt++;
        	}
        	else if(num1 < num2){
        		num2 = num2 - num1;
        		cnt++;
        	}
        	else {
        		cnt++;
        		break;
        	}
        }
        return cnt;
    }
};