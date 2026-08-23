class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();

        int QL = 0, QR = 0;
        int leftSum = 0, rightSum = 0;

        for (int i = 0; i < n / 2; i++) {
            if (num[i] == '?')
                QL++;
            else
                leftSum += num[i] - '0';
        }

        for (int i = n / 2; i < n; i++) {
            if (num[i] == '?')
                QR++;
            else
                rightSum += num[i] - '0';
        }

        if ((QL + QR) % 2 == 1)
            return true;

        if (leftSum - rightSum ==
            (QR - QL) / 2 * 9)
            return false;

        return true;
    }
};