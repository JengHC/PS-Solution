#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    //10개의 수를 입력 받아, 그 중 홀 수만 더하는 값 출력
	int test_case;
	int T;     
	cin>>T;   // 값을 입력 받고,
    
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int sum = 0;                        // 더한값을 받기 위해 sum 변수 
        
        for (int i = 0; i<10;i++)          // 테스트 케이스의 첫 줄에 10개가 주어지니까, 0부터 10까지
        {
            int num = 0;        
            cin>>num;                      // 더해야 할 값을 입력 받아야함
            
            if(num%2==1)                 // num값이 2로 나눴을때 1이 남으면 홀수니까, 그 값을 더해서 sum으로, 
                sum += num;
        }
        
		cout<<"#" <<test_case<<" "<<sum<<endl;
	}
	return 0;
}