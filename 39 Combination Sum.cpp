#include "headers.h"

void combinationSumBacktracking(vector<vector<int>>& result, vector<int> candidates, vector<int> curvec, int target, int max_valid, int value, int min_valid)
{
	if (value == target)
		return result.push_back(curvec);

	if (value > max_valid)
		return;

	for (size_t i = 0; i < candidates.size(); i++)
	{
		int candidate = candidates[i];
		if (candidate < min_valid)
			continue;

		vector<int> nextvec = curvec;
		nextvec.push_back(candidate);
		combinationSumBacktracking(result, candidates, nextvec, target, max_valid, value + candidate, candidate);
	}
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
	vector<int> _candidates;
	vector<vector<int>> out;

	for (size_t i = 0; i < candidates.size(); i++)
	{
		int candidate = candidates[i];
		if (candidate > target)
			continue;

		if (candidate == target) {
			out.push_back(*new vector<int>{ target });
			continue;
		}

		_candidates.push_back(candidate);
	}

	candidates = _candidates;
	if (candidates.size() == 0) return out;
	int min = *min_element(candidates.begin(), candidates.end());
	int max_valid = target - min;

	_candidates.clear();
	for (size_t i = 0; i < candidates.size(); i++)
	{
		int candidate = candidates[i];
		if (candidate > max_valid)
			continue;
		_candidates.push_back(candidate);
	}

	candidates = _candidates;
	if (candidates.size() == 0) return out;

	vector<int> empty;
	combinationSumBacktracking(out, candidates, empty, target, max_valid, 0, 0);

	return out;
}

int main() {
	vector<int> candidates = { 2,3,6,7 };
	vector<vector<int>> x = combinationSum(candidates, 7);

	candidates = { 2,3,5 };
	x = combinationSum(candidates, 8);

	candidates = { 2 };
	x = combinationSum(candidates, 1);
}
