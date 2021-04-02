class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        x=list(jewels)
        count1=0
        for i in stones:
            y=x.count(i)
            count1+=y
        return (count1)
