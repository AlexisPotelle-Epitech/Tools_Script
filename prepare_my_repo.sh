#!/bin/bash
name_of_dir=$1
user_login="alexis.potelle@epitech.eu"
token="73be7f59d265bf5a3ad072d1e52ad3fbf4c4ce83938e1d455efe1fec53bee770effe177dbfa479821059fff13f38dbbd35fb213b5576533ca47f6b94b1973ceb"


create_repo() {
  blih -u $user_login -t $token repository create $name_of_dir
}

set_reading_permissions_for_epitech_bot() {
  blih -u $user_login -t $token repository setacl $name_of_dir ramassage-tek r  
}

check_permissions() {
    blih -u $user_login -t $token repository getacl $name_of_dir
}

make_git_clone() {
    git clone git@git.epitech.eu:/$user_login/$name_of_dir
}

main() {
   create_repo
   set_reading_permissions_for_epitech_bot
   check_permissions
   make_git_clone
}

main
