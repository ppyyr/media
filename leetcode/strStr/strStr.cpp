class Solution {
public:
    int strStr(string haystack, string needle) {
        int i, j;
        int size_haystack = haystack.length();
        int size_needle = needle.length();
        cout << "size_haystack:" << size_haystack << setw(4) << "size_needle:" << size_needle << endl;
        if( size_needle == 0 )
            return 0;
        for(i = 0;i < (size_haystack - size_needle + 1); i++){
            for(j = 0;j < size_needle; j++) {
                cout << "i:" << i << setw(4) << "j:" << j << endl;
                if((j == size_needle - 1) && (haystack[i+j]==needle[j]))
                    return i;
                else if(haystack[i+j]==needle[j])
                    continue;
                else
                    break;
            }
        }
        return -1;
    }
};