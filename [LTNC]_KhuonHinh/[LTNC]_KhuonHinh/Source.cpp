#include <iostream>
#include <string>
using namespace std;

struct Player {
    string playerCode;
    string playerName;
    int ngay, thang, nam;
};

void inputPlayer(Player& player) {
    getline(cin, player.playerCode);
    getline(cin, player.playerName);
    cin >> player.ngay >> player.thang >> player.nam;
}

void outputPlayer(const Player& player) {
    cout << player.playerCode << endl;
    cout << player.playerName << endl;
    cout << player.ngay<<"/"<<player.thang<<"/"<<player.nam << endl;
}

int main() {
    Player player;

    // Nhap thong tin cua cau thu
    inputPlayer(player);

    // Xuat thong tin cau thu
    outputPlayer(player);

    return 0;
}
