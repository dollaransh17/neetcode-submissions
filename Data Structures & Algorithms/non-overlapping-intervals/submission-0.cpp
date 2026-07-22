
bool comparator(const pair<int , int>&a , const pair<int , int>&b){
    return a.second < b.second;
}

class Solution{
    public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals){
        if(intervals.empty()) return 0;
        int n = intervals.size();
        //vector<pair<int,int>> intervalsPair;
        vector<pair<int,int>>meetings;
        for(int i = 0 ; i < n ; ++i){
            meetings.push_back({intervals[i][0], intervals[i][1]});
        }
        sort(meetings.begin() , meetings.end() , comparator);
        int limit = meetings[0].second;
        int remove = 0;
        for(int i = 1 ; i < n ; i++){
            if(meetings[i].first >= limit)
           {
             limit = meetings[i].second;
           }
            else
           {
           remove++;
           }
        }
        return remove;
    }
};