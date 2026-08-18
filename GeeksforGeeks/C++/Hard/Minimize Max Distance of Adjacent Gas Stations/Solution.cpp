class Solution {
public:

    bool isValid(vector<int>& stations, double mid, int k) {

        int cnt = 0;

        for (int i = 0; i < stations.size() - 1; i++) {

            double dist = stations[i + 1] - stations[i];

            cnt += ceil(dist / mid) - 1;

            if (cnt > k)
                return false;
        }

        return true;
    }

    double minMaxDist(vector<int>& stations, int k) {

        double low = 0;
        double high = 0;

        for (int i = 0; i < stations.size() - 1; i++) {
            high = max(high, (double)(stations[i + 1] - stations[i]));
        }

        while (high - low > 1e-6) {

            double mid = low + (high - low) / 2;

            if (isValid(stations, mid, k))
                high = mid;
            else
                low = mid;
        }

        return high;
    }
};
