#!/bin/sh
drush @toweringoaks.dev updatedb -y
drush @toweringoaks.dev fra -y
drush @toweringoaks.dev cc all
