// hw01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;


vector<int> up(vector<int>numbers)
{

	for (int i = 0; i < numbers.size(); i++)
	{
		for (int j = i + 1; j < numbers.size(); j++)
		{
			if (numbers[i] > numbers[j])
			{
				int temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}
	return numbers;
}

// 오름차순 정렬 함수
vector<int> down(vector<int> numbers)
{
	for (int i = 0; i < numbers.size(); i++)
	{
		for (int j = i + 1; j < numbers.size(); j++)
		{
			if (numbers[i] < numbers[j])
			{
				int temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}
	return numbers;
}

int sums(vector<int> numbers)
{
	int sum = 0;
	for (int i = 0; i < numbers.size(); i++)
	{
		sum += numbers[i];
	}
	return sum;
}

float avgs(vector<int> numbers)
{
	int sum = sums(numbers);
	return static_cast<float>(sum) / numbers.size();
}

int main()
{
	vector<int> numbers;
	int sum = 0;
	float avg = 0.0f;
	for (int i = 0; i < 5; i++)
	{
		int num;
		cin >> num;
		numbers.push_back(num);
	}

	sum = sums(numbers);
	avg = avgs(numbers);
	numbers = up(numbers);
	cout << "합계 : " << sum << endl;
	cout << "평균 : " << avg << endl;



	
	for (int i = 0; i < numbers.size(); i++)
	{
		cout << numbers[i] << " ";
	}

}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
