// Given two words, beginWord and endWord, and a dictionary wordList, return the number of words in the shortest transformation sequence from beginWord to endWord, or 0 if no such sequence exists.
// Tansformation:- We are only allowed to transform a single letter in a word at a time.
// Note - BeginWord is not prsent in the wordList

int ladderLength(string beginWord, string endWord, vector<string> &wordList)
{
    unordered_set<string> s;
    for (int i = 0; i < wordList.size(); i++)
    {
        s.insert(wordList[i]);
    }

    if (s.find(endWord) == s.end())
        return 0;

    queue<string> q;
    q.push(beginWord);
    int len = 0;

    while (!q.empty())
    {
        len++;
        int qlen = q.size();
        for (int i = 0; i < qlen; i++) // for loop to check for a single letter change in all the words of queue
        {
            string s1 = q.front();
            q.pop();
            for (int j = 0; j < s1.size(); j++) // for loop for each word, we are checking every letter of a single word
            {
                char org = s1[j];
                for (char ch = 'a'; ch <= 'z'; ch++) // checking every letter of word with all possible values i.e(a-z) and after single letter change we find that word to be present in our set than we will puch it into our queue or if it is our answer than return len + 1
                {
                    s1[j] = ch;
                    if (s1 == endWord)
                        return len + 1; // len + 1 because we have to return the length of the transformation sequence, that will be equal to number of transfformations + 1
                    else if (s.find(s1) == s.end())
                        continue;
                    q.push(s1);
                    s.erase(s1); // this is a mandatory step otherwise it will be an infinite loop
                }
                s1[j] = org;
            }
        }
    }

    return 0;
}