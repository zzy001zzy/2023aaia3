class Solution:
    def vowelStrings(self, words: List[str], queries: List[List[int]]) -> List[int]:
        vowel="aeiou"
        prefix=[]
        ans=[]
        n=len(words)
        now=0
        for word in words:
            if word[0] in vowel and word[-1] in vowel:now+=1
            prefix.append(now)
        for i,j in queries:
            if i==0:
                ans.append(prefix[j])
                continue
            ans.append(prefix[j]-prefix[i-1])
        return ans