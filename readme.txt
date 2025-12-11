Git is a version control system.

use "vi" to create a file;
than use "cd"t o open the file;
use fg to recoveray the file that down
E means Edit anyway;
R means Recovor;

use i to edit;
to esc: use Esc input : ,wq(write quit)
enter;

to delete: put Esc, than put "x",  or "dd".

use "git reflog" torecord every command you make;
HEAD pointed to is the current version ,so git allows us to travel between versions of history,use command :"git reset --hard <commit id>",

before shuttle,with "git log"can view the submission history   to determine which version to roll back to.

to return the future ,use "git reflog" view command history to determine which future version to return to,Time Machine Shuttle.

in addition  git reset --hard <commit id>:will roll back to the committed state of the previous version,
             git reset --soft <commit id>:will roll back to the Uncommitted state for;
             git reset --mixed<commit id>:will roll back to the state where the previous version was nOT added and NOT committed.

Thats all. 
