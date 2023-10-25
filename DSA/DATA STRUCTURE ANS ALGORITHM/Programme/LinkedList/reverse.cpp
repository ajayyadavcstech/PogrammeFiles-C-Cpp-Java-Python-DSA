#include <iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int a)
    {
        val = a;
        next = NULL;
    }
};
int size(ListNode *head)
{
    int len = 0;
    while (head)
    {
        len++;
        head = head->next;
    }
    return len;
}
class Solution
{
public:
    void reorderList(ListNode *head)
    {

        ListNode *temp = reverse(head);

        cout << size(temp) << endl;
        cout << size(head) << endl;
    }

private:
    ListNode *reverse(ListNode *head)
    {
        auto cur = head, after = head->next;
        ListNode *prev = NULL;
        while (cur)
        {
            after = cur->next;
            cur->next = prev;
            prev = cur;
            cur = after;
        }
        return prev;
    }
};
int main()
{
    Solution s;
    TreenNode
    s.reorderList(head);

    return 0;
}