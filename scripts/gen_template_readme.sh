#!/usr/bin/env bash

REPO_URL="https://github.com/Aeyone/aeyone-algorithm-note"
BRANCH="main"
TEMPLATE_DIR="Template"

url_encode() {
    echo "$1" | sed 's/ /%20/g'
}

echo "## Template"
echo

for category in "$TEMPLATE_DIR"/*; do
    [ -d "$category" ] || continue

    cname=$(basename "$category")
    cname_enc=$(url_encode "$cname")

    echo "<details open>"
    echo "<summary><strong>$cname</strong></summary>"
    echo

    for file in "$category"/*; do
        [ -f "$file" ] || continue
        fname=$(basename "$file")
        fname_enc=$(url_encode "$fname")

        url="$REPO_URL/blob/$BRANCH/$TEMPLATE_DIR/$cname_enc/$fname_enc"
        echo "- [$fname]($url)"
    done

    echo
    echo "</details>"
    echo
done

