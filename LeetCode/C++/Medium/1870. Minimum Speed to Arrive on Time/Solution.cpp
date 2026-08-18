class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {

        for (int speed = 1; speed <= 10000000; speed++) {

            double time = 0;

            for (int i = 0; i < dist.size(); i++) {

                double t = (double)dist[i] / speed;

                if (i != dist.size() - 1)
                    time += ceil(t);
                else
                    time += t;

                if (time > hour)
                    break;
            }

            if (time <= hour)
                return speed;
        }

        return -1;
    }
};