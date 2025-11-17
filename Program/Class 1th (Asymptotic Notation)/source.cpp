#include <iostream>

using namespace std;

int main()
{
#pragma region 시간 복잡도
	//컴퓨터 프로그램의 입력값과 연산 수행 시간의 상관 관계를 나타내는 척도

#pragma region 0(1) 상수 시간
	//입력 크기와 상관 없이 일정한 시간 복잡도를 가지는 시간

	//예: 배열에서 특정 인덱스의 요소에 접근하는 경우
#pragma endregion

#pragma region 0(log n) 로그 시간
	//데이터 크기에 따라 실행 시간이 로그 함수의 형태로 증가하는 시간 복잡도

	//예: 이진 탐색 알고리즘
#pragma endregion

#pragma region 0(n) 선형 시간
	//입력에 따라 걸리는 시간이 선형적으로 증가하는 시간 복잡도

	//예: 순차 탐색 알고리즘
#pragma endregion

#pragma region 0(n log n) 로그 선형 시간
	//입력 크기 n에 대해 선형적으로 증가하면서, 로그 향이 곱해지는 형대의 시간 복잡도

	//예: 병합 정렬, 퀵 정렬 알고리즘
#pragma endregion

#pragma region 0(n^2) 제곱 시간
	//입력되는 데이터를 기준으로 n^2 만큼의 시간이 증가되는 시간 복잡도

	//예: 버블 정렬, 삽입 정렬 알고리즘, 2중 for문
#pragma endregion

#pragma endregion

#pragma region 공간 복잡도
	//프로그램 실행과 완료에 얼마나 많은 공간이 필요한지를 나타내는 척도

#pragma region 고정 공간
	//입력 크기와 상관 없이 프로그램 시작 시 항상 필요한 메모리 공간

	//예: 변수 선언, 배열
#pragma endregion

#pragma region 가변 공간
	//입력 크기나 재귀의 깊이에 따라 변하는 메모리 공간
	// 
	//예: Linked List, 동적 메모리 할당, 재귀 함수 호출
#pragma endregion

#pragma endregion

#pragma region 점근적 표기법
	//상수 계수와 중요하지 않는 항목을 제거하여 표기하는 표기법

	//f(n) = n^2 + n + 300
	//점근적 표기법 -> n^2

	//높은 수가 낮은 차수에 붙어 있어도 n이 무한대로 갈 수 있기 때문에 제일 높은 차수가 된다.
#pragma endregion

	return 0;
}