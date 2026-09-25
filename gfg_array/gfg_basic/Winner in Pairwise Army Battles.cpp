/*
Winner in Pairwise Army Battles
Two armies, A and B, have the same number of soldiers. The power of their soldiers is given by arr1[] and arr2[], 
where the ith soldier of Army A fights only the ith soldier of Army B.
If arr1[i] > arr2[i], Army A wins the battle.
If arr1[i] < arr2[i], Army B wins the battle.
If arr1[i] == arr2[i], both soldiers are eliminated.
Return "A" if Army A wins more battles, "B" if Army B wins more battles, otherwise return "DRAW".
*/
class Solution {
	public:
	string countryAtWar(vector<int>& arr1, vector<int>& arr2) {
		int A = 0, B = 0;
		for (int i = 0; i < arr1.size(); i++) {
			if (arr1[i] > arr2[i])
				A++;
			else if (arr1[i] < arr2[i])
				B++;
		}
		if (A > B)
			return "A";
		if (B > A)
			return "B";
		return "DRAW";
	}
};
