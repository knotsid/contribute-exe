#  LONGEST COMMON SUBSEQUENCE USING DYNAMIC PROGRAMMING 
def lcs(i,j,s1,s2,dp):
    if i<0 or j<0:
        return 0
    if dp[i][j]!=-1:
        return dp[i][j]
    if s1[i]==s2[j]:
        dp[i][j]=1+lcs(i-1,j-1,s1,s2,dp)
        return dp[i][j]
    dp[i][j]=max(lcs(i-1,j,s1,s2,dp),lcs(i,j-1,s1,s2,dp))
    return dp[i][j]
def getLengthOfLCS(str1, str2):
    dp=[[-1 for i in range(len(str2))]for j in range(len(str1))]
    return lcs(len(str1)-1,len(str2)-1,str1,str2,dp)
#if name==__main__:
s1=input()
s2=input()
print(getLengthOfLCS(s1,s2))

