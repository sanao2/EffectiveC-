#include "pch.h"
//--------------------------------����� ���ͷ� ���� ----------------------------------------------------//

class Length {
private:
	const long double _value;
	Length(long double value) : _value(value) {} // ������, private�� �����Ͽ� �ܺο��� ���� �������� ���ϰ� ��

	friend Length operator"" _m(unsigned long long int value);
	friend Length operator"" _m(long double value);
	friend Length operator"" _km(unsigned long long int value);
	friend Length operator"" _km(long double value);
public:
	long double m() const { return _value; }
	long double km() const { return _value * 0.001; } // km ������ ��ȯ
	Length operator-() const
	{
		return Length(-_value);
	}
	Length operator+() const
	{
		return Length(+_value);
	}
	Length operator+ (const Length& length) const
	{
		return Length(_value + length._value);
	}
};

Length operator"" _m(unsigned long long value)
{
	return Length(value);
}
Length operator"" _m(long double value)
{
	return Length(value);
}
Length operator"" _km(unsigned long long value)
{
	return Length(value * 1000);
}
Length operator"" _km(long double value)
{
	return Length(value * 1000);
}

string vectortest()
{
	vector<string> vec = { "jame", "kim" };
	string answer = "�輭���� ";
	for (int i = 0; i <= vec.size(); ++i)
	{
		if (vec[i] == "Kim")
		{
			return answer + to_string(i) + "�� �ִ�.";
		}
	}

	return answer;

}
