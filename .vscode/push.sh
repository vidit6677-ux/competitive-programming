#!/bin/bash
# Commit and push all new/changed solutions. Run after a session (never during a live contest).
cd "$(dirname "$0")/.." || exit 1
python3 .vscode/sort.py
git add -A
if git diff --cached --quiet; then
    echo "Nothing new to push."
    exit 0
fi
git commit -q -m "Add solutions ($(date +%F))"
git push && echo "Pushed to GitHub."
