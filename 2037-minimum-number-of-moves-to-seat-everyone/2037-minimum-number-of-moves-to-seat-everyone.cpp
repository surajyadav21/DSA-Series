class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int cnt = 0;
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int i=0, j=0;
        while(i<seats.size() && j<students.size()){
            if(seats[i] < students[j]){
                while(seats[i] != students[j]){
                    seats[i]++;
                    cnt++;
                }
                i++; j++;
            }
            else if(seats[i] > students[j]){
                while(seats[i] != students[j]){
                    seats[i]--;
                    cnt++;
                }
                i++; j++;
            }
            else{
                i++;
                j++;
            }
        }
        return cnt;
    }
};