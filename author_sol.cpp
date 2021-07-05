#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s, t;
	cin >> s >> t;
	int w = 0;
	// start comparing letters from the both of their last characters
	while (true) {
		// set the last index for the string 's' (and continue decrementing everytime 'w' is increasing)
		int i = s.length() - w - 1;
		// set the last index for the string 't' (and continue decrementing everytime 'w' is increasing)
		int j = t.length() - w - 1;
		if (i >= 0 && j >= 0 && s[i] == t[j]) {
			// if the characters match, then increment 'w'
			w++;
		} else {
			// otherwise, break the loop
			break;
		}
	}
	// get the difference of the combined total length of the two strings and the number
	// of matched characters times two (since there is only one operation per step)
	cout << s.length() + t.length() - 2 * w << '\n';
	return 0;
}
