//#include "headers.h"
//
//// FUNCTION
//
//bool isPalindrom(const string& str, int i, int j)
//{
//	j--;
//
//	while (i < j)
//	{
//		if (str[i] != str[j])
//		{
//			return false;
//		}
//		i++;
//		j--;
//	}
//	return true;
//}
//
//string longestPalindrome(string s) 
//{
//	if(s.size() == 1 || isPalindrom(s, 0, s.size()))
//		return s;
//
//	int size = s.size(); int i = 0;
//	while (true)
//	{
//		if (isPalindrom(s, i, size+i-1))
//		{
//			char* str = new char[size];
//			memcpy(str, s.c_str() + i, size);
//			str[size - 1] = '\0';
//			string ts(str);
//			delete[] str;
//			return ts;
//		}
//
//		if (size + i > s.size())
//		{
//			i = 0;
//			size -= 1;
//		}
//		else
//			i++;
//	}
//}
/////////////////////////////
//
//// TESTS
//int main()
//{
//	clock_t start = clock();
//	// hannah
//	cout << longestPalindrome("hannah") << endl;
//	// hah
//	cout << longestPalindrome("hanhah") << endl;
//	// bab
//	cout << longestPalindrome("babad") << endl;
//	// bb
//	cout << longestPalindrome("bbac") << endl;
//	// wnsnw
//	cout << longestPalindrome("klvxwqyzugrdoaccdafdfrvxiowkcuedfhoixzipxrkzbvpusslsgfjocvidnpsnkqdfnnzzawzsslwnvvjyoignsfbxkgrokzyusxikxumrxlzzrnbtrixxfioormoyyejashrowjqqzifacecvoruwkuessttlexvdptuvodoavsjaepvrfvbdhumtuvxufzzyowiswokioyjtzzmevttheeyjqcldllxvjraeyflthntsmipaoyjixygbtbvbnnrmlwwkeikhnnmlfspjgmcxwbjyhomfjdcnogqjviggklplpznfwjydkxzjkoskvqvnxfzdrsmooyciwulvtlmvnjbbmffureoilszlonibbcwfsjzguxqrjwypwrskhrttvnqoqisdfuifqnabzbvyzgbxfvmcomneykfmycevnrcsyqclamfxskmsxreptpxqxqidvjbuduktnwwoztvkuebfdigmjqfuolqzvjincchlmbrxpqgguwuyhrdtwqkdlqidlxzqktgzktihvlwsbysjeykiwokyqaskjjngovbagspyspeghutyoeahhgynzsyaszlirmlekpboywqdliumihwnsnwjc") << endl;
//	clock_t end = clock();
//
//	double seconds = (double)(end - start) / CLOCKS_PER_SEC;
//	cout << seconds;
//}