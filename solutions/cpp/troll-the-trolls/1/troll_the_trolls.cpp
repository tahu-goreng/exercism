#include <iostream>
#include <vector>
namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.
enum  AccountStatus{
    troll,
    guest,
    user,
    mod
};
// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.
enum  Action{
    read,
    write,
    remove
};
// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.
bool display_post(AccountStatus poster, AccountStatus viewer){
    if (poster == AccountStatus::troll){
        return poster==viewer;
    } 
    return true;
}

bool permission_check (Action action, AccountStatus account){
    std::vector <Action> permited{};
    switch (account){
        case AccountStatus::mod:
            permited.push_back(Action::remove);
            [[fallthrough]];
        case AccountStatus::user:
        case AccountStatus::troll:
            permited.push_back(Action::write);
            [[fallthrough]];
        case AccountStatus::guest:
            permited.push_back(Action::read);
            break;
    }
    for (std::size_t i=0; i<permited.size(); i++){
        if (permited[i]==action){
            return true;
        }
    }
    return false;
}

bool valid_player_combination (AccountStatus player1, AccountStatus player2){
    if (player1 == AccountStatus::guest || player2 == AccountStatus::guest){
        return false;
    }
    if (player1 != AccountStatus::troll && player2 != AccountStatus::troll){
        return true;
    }
    if (player1 != AccountStatus::troll && player2 == AccountStatus::troll){
        return false;
    }
    if (player1 == AccountStatus::troll && player2 != AccountStatus::troll){
        return false;
    }
    return true;
}

bool has_priority (AccountStatus player1, AccountStatus player2){
    return player1>player2;
}


}  // namespace hellmath
