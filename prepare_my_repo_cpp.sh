#!/bin/bash
name_of_dir=$1
user_login="alexis.potelle@epitech.eu"


create_repo() {
  blih -u $user_login repository create $name_of_dir
}

set_reading_permissions_for_epitech_bot() {
  blih -u $user_login repository setacl $name_of_dir ramassage-tek r  
}

check_permissions() {
    blih -u $user_login repository getacl $name_of_dir
}

make_git_clone() {
    git clone git@git.epitech.eu:/$user_login/$name_of_dir
}

clone_and_prepare_repository() {
    git clone https://github.com/AlexisPotelle-Epitech/file_prepare_repos.git
    cp -r file_prepare_repos/cpp/* $name_of_dir
    rm -rf file_prepare_repos
    mkdir $name_of_dir/src
    cd $name_of_dir
    ls -l
}

main() {
   create_repo
   set_reading_permissions_for_epitech_bot
   check_permissions
   make_git_clone
   clone_and_prepare_repository
}

main
