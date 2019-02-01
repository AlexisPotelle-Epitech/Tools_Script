#!/bin/bash
name_of_dir=$1
user_login=
token=


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
