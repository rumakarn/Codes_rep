class Solution
{
private:
    bool CheckEqual(int a[26], int b[26])
    {
        for (int i = 0; i < 26; i++)
        {
            if (a[i] != b[i])
            {
                return 0;
            }
        }
        return 1;
    }

public:
    bool checkInclusion(string s1, string s2)
    {
        // character count array
        int count1[26] = {0};
        for (int i = 0; i < s1.length(); i++)
        {
            int index = s1[i] - 'a';
            count1[index]++;
        }

        // traversing through window of length s1
        int i = 0;
        int count[26] = {0};
        int WindowSize = s1.length();
        int count2[26] = {0};

        // running for first window
        for (i = 0; i < s2.length() && i < WindowSize; i++)
        {
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }
        if (CheckEqual(count1, count2))
            return 1;
        // processing next window

        while (i < s2.length())
        {
            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;

            char oldChar = s2[i - WindowSize];
            index = oldChar - 'a';
            count2[index]--;
            i++;
            if (CheckEqual(count1, count2))
                return 1;
        }
        return 0;
    }
};