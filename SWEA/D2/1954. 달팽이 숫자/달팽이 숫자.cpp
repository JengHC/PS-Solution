#include<iostream>
#include<cstring> // memset 함수를 사용하기 위해 필요
using namespace std;

// 방향을 나타내는 배열
int dx[] = {1, 0, -1, 0}; // 오른쪽, 아래쪽, 왼쪽, 위쪽
int dy[] = {0, 1, 0, -1};

int main(int argc, char** argv)
{
    int map[10][10]; // 정사각형 모양의 배열
	int test_case;
	int T;
	cin >> T; // 테스트 케이스의 개수 입력
	for(test_case = 1; test_case <= T; ++test_case)
	{
        memset(map, 0, sizeof(map)); // 배열 초기화
        // memset 함수: 메모리를 특정 값으로 초기화하는 함수
        // 첫 번째 인자는 초기화할 배열의 이름, 두 번째 인자는 초기화할 값,
        // 세 번째 인자는 초기화할 바이트 수를 나타냅니다.
        // 여기서는 map 배열을 0으로 초기화합니다.

        int n;
        cin >> n; // 배열의 크기 입력
        int i = 0, j = 0, dir = 0; // 현재 위치 및 이동 방향 변수
        map[0][0] = 1; // 시작 위치에 1 채우기
        int cnt = 2; // 다음으로 채워질 숫자

        int size = n * n; // 배열의 크기

        // 배열 채우기 함수
        while(size >= cnt){
            // 다음 위치 계산
            int ty = i + dy[dir];
            int tx = j + dx[dir];
            
            // 이동할 위치가 배열의 범위를 벗어나거나 이미 숫자가 채워진 경우
            if(ty < 0 || tx < 0 || ty >= n || tx >= n || map[ty][tx] > 0){
                dir += 1; // 다음 방향 설정
                if(dir == 4) // 네 방향을 모두 확인한 경우
                    dir = 0; // 처음 방향으로 되돌아가기
                continue; // 다음 반복문 수행
            }
            map[ty][tx] = cnt; // 숫자 채우기
            i = ty; // 현재 위치 갱신
            j = tx;
            cnt++; // 다음 숫자로 이동
        }

        // 결과 출력 함수
        cout << "#" << test_case << "\n";
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                cout << map[i][j] << " "; // 숫자 출력
            }
            cout << "\n";
        }
      
	}
	return 0;
}
