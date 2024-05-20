# pipex
This project is about handling pipes.

# Example
$> ./pipex infile "ls -l" "wc -l" outfile
    Should behave like: < infile ls -l | wc -l > outfile
$> ./pipex infile "grep a1" "wc -w" outfile
    Should behave like: < infile grep a1 | wc -w > outfile