# Earthquake and the Paint Shop

https://practice.geeksforgeeks.org/problems/earthquake-and-the-paint-shop4518/1

Geek's Paint Shop is one of the famous shop in Geekland, but 2014 Earthquake caused disarrangement of the items in his shop. Each item in his shop is a 40-digit alpha numeric code .
Now Chunky wants to retain the reputation of his shop, for that he has to arrange all the distinct items in lexicographical order.
Your task is to arrange the all the distinct items in lexicographical ascending order and print them along with their count.

```
Input:
N = 3
A[] =
["2234597891 zmxvvxbcij 8800654113 jihgfedcba",
"1234567891 abcdefghij 9876543219 jihgfedcba",
"2234597891 zmxvvxbcij 8800654113 jihgfedcba"]
Output:
1234567891 abcdefghij 9876543219 jihgfedcba 1
2234597891 zmxvvxbcij 8800654113 jihgfedcba 2


Input:
N = 2
A[] =
["3122049353 onafrnbhtr 9822827304 yzfhdgzcvx", 
"2992299540 lpvkgykmlk 6946169466 vdqwvywwgg"] 
Output:
2992299540 lpvkgykmlk 6946169466 vdqwvywwgg  1
3122049353 onafrnbhtr 9822827304 yzfhdgzcvx  1
```

Expected Time Complexity:O(NlogN)
Expected Auxillary Space:O(N)
Constraints:
1 ≤ N ≤ 10000