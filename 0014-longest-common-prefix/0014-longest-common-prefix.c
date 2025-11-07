#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";
    
    int i = 0;        // 현재 인덱스
    int ans = 0;      // 공통 접두사 길이

    while (true) {
        char c = strs[0][i];  // 첫 문자열의 i번째 문자

        if (c == '\0') break; // 첫 문자열이 끝나면 종료

        // 모든 문자열이 동일한 문자인지 검사
        for (int f = 1; f < strsSize; f++) {
            if (strs[f][i] != c || strs[f][i] == '\0') {
                goto END;
            }
        }

        ans++;
        i++;
    }

END:
    // 공통 접두사 문자열 생성
    char* prefix = (char*)malloc(ans + 1);
    for (int k = 0; k < ans; k++) prefix[k] = strs[0][k];
    prefix[ans] = '\0';
    return prefix;
}