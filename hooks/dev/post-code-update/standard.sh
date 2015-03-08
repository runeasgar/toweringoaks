#!/bin/sh
drush @joshuataylo1.dev updatedb -y
drush @joshuataylo1.dev fra -y
drush @joshuataylo1.dev cc all
