class Solution {
  public:
    int lastRemaining(int n, int k) {
        list<int> people;

        for (int i = 1; i <= n; i++) {
            people.push_back(i);
        }

        auto it = people.begin();

        while (people.size() > 1) {

            for (int count = 1; count < k; count++) {
                ++it;

                if (it == people.end()) {
                    it = people.begin();
                }
            }

            it = people.erase(it);

            if (it == people.end()) {
                it = people.begin();
            }
        }

        return people.front();
    }
};