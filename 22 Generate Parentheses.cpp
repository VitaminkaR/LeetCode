#include "headers.h"

vector<string>* ParenthesisBacktracking(string str, int on, int cn) {
	vector<string>* variants = new vector<string>();

	if (cn < on)
		return NULL;

	if (on > 0) {
		vector<string>* onc = ParenthesisBacktracking(str + "(", on - 1, cn);
		if (onc != NULL) {
			variants->insert(variants->end(), onc->begin(), onc->end());
		}
	}

	if (cn > 0) {
		vector<string>* cnc = ParenthesisBacktracking(str + ")", on, cn - 1);
		if (cnc != NULL) {
			variants->insert(variants->end(), cnc->begin(), cnc->end());
		}
	}

	if(on == 0 && cn == 0)
		variants->push_back(str);
	return variants;
}

vector<string> generateParenthesis(int n) {
	return *ParenthesisBacktracking("(", n - 1, n);
}

int main() {
	vector<string> result = generateParenthesis(8);
}
