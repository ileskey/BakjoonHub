#include<iostream>
#include<vector>
using namespace std;
int countMan, countParty, countFactMan, factMan;
int manGroupArr[51] = {};
int factManArr[51] = {};
//party linked list
class list {
public:
	int partyNum;
	vector<int> manArr;
	list* next;

	list(int N) {
		//countParticipant = 파티 참여자 수, participant = 파티 참여자 입력 임시저장, grouped = 같은 그룹으로 묶을 수 있는 지 flag
		int countParticipant, participant;
		vector<int> grouped;
		partyNum = N;
		cin >> countParticipant;
		for (int i = 0; i < countParticipant; i++) {
			cin >> participant;
			if (manGroupArr[participant] != 0) grouped.push_back(manGroupArr[participant]);
			manGroupArr[participant] = N;
			manArr.push_back(participant);
		}
		int gsize = grouped.size();
		while (gsize--){
			for (int i = 1; i <= countMan; i++) {
				if (manGroupArr[i] == grouped.front()) manGroupArr[i] = N;
			}
			grouped.erase(grouped.begin());
		}
		if (countParty - N > 0) {
			this->next = new list(N + 1);
		}
	}
};

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> countMan >> countParty >> countFactMan;
	vector<int> factManGroup;
	while (countFactMan--) {
		cin >> factMan;
		factManGroup.push_back(factMan);
	}
	list* head = new list(1);
	int factManGroupSize = factManGroup.size();
	while (factManGroupSize--) {
		int factManIndex;
		if (factManArr[factManGroup.front()] == 0) {
			factManIndex = manGroupArr[factManGroup.front()];
			for (int i = 1; i <= countMan; i++)
				if (manGroupArr[i] == factManIndex) factManArr[i] = 1;
		}
		factManGroup.erase(factManGroup.begin());
	}
	int count = 0;
	while (true) {
		int canLie = 1;
		for (int i : head->manArr) {
			if (factManArr[i] == 1) {
				canLie = 0;
				break;
			}
		}
		if (canLie == 1) count++;
		if (head->next == NULL) break;
		head = head->next;
	}
	cout << count;
	return 0;
}