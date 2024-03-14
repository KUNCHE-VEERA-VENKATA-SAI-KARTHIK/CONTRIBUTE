class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        
    int circularSandwiches = 0;
        int squareSandwiches = 0;

        for (int i = 0; i < students.size(); ++i) {
            if (students[i] == 0) {
                ++circularSandwiches;
            } else {
                ++squareSandwiches;
            }
        }

        for (int i = 0; i < sandwiches.size(); ++i) {
            if (sandwiches[i] == 0) {
                if (circularSandwiches == 0) {
                    return squareSandwiches;
                }

                --circularSandwiches;
            } else {
                if (squareSandwiches == 0) {
                    return circularSandwiches;
                }

                --squareSandwiches;
            }
        }

        return circularSandwiches + squareSandwiches;
    }
};