class Solution 
{
public:
    int distanceBetweenBusStops(vector<int>& dist, int s, int e) 
    {
        int n = dist.size();
        int sum1 = 0, sum2 = 0;
        int total = 0;

        // clockwise
        if (s < e) // start = 2, end = 7
        {
            for (int i = s; i < e; i++)
                sum1 += dist[i];
        }
        else if (s > e) // start = 7, end = 2
        { 
            for (int i = e; i < s; i++)
                sum1 += dist[i];
        }
        // anti-clockwise
        for (int i : dist)
            total += i; // total dist
        sum2 = total - sum1;
        return min(sum1, sum2);
    }
};