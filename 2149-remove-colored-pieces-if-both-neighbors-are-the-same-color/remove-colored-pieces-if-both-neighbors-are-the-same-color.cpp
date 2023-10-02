class Solution
{
public:
    bool winnerOfGame(string colors)
    {
        int aliceCount = 0;
        int bobCount = 0;
if(colors.size() <3) return false;
        // First, check Alice's turn
       for (int i = 0; i < colors.size() - 2; i++)
        {
            if (colors[i] == 'A' && colors[i + 1] == 'A' && colors[i + 2] == 'A')
            {
                aliceCount++;
            }
        }

        // Then, check Bob's turn
       for (int i = 0; i < colors.size() - 2; i++)
        {
            if (colors[i] == 'B' && colors[i + 1] == 'B' && colors[i + 2] == 'B')
            {
                bobCount++;
            }
        }

        return aliceCount > bobCount; // Alice wins if she has more 'AAA' than Bob has 'BBB'
    }
};
