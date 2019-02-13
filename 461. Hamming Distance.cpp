class Solution {
public:
    int hammingDistance(int x, int y) {
        x = x ^ y; //use xor to find what's difference
        int temp = 0;
        // As you can see in problem description : 0 ≤ x, y < 2^ 31
        // so there is most 30 bit in x or y 
        for(int i=0;i<31;i++){
            if(x&(1<<i))temp++; 
            //this line is easy to trace    
            /*Input: x = 1, y = 4

            Output: 2

            Explanation:
            1   (0 0 0 1)
            4   (0 1 0 0)
                   ↑   ↑
            So after we xor them we get (0 1 0 1)
            and we initialize i to 0 and 1<<0 (left shift) is 1
              0 1 0 1
            (&)     1
            ----------
                    1 ---> temp++
            (still in for-loop ,i++)
            i = 1  1<<1  , 1 left shift is 2
            
              0 1 0 1
            (&)   1
            ----------
                  0   ---> temp not increase
            
            (still in for-loop ,i++)
            i = 2  1<<2  , 2 left shift is 4      
              0 1 0 1
            (&) 1
            ----------
                1   ---> temp++
            
            and so on
            */
            
        }
        return temp;
    }
};

//if you want speed up, you can calculate where's the MSB and set it up in for-loop condition
