class Solution {
public:
    int solve(int head, int gap, int count, bool left) {

        if (count == 1)
            return head;

        if (left) {

            head = head + gap;
        } else {

            if (count % 2 == 1) {
                head = head + gap;
            }
        }

        count = count / 2;
        gap = gap * 2;

        return solve(head, gap, count, !left);
    }

    int lastRemaining(int n) { return solve(1, 1, n, true); }
};