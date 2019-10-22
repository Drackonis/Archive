find . \( -name "*.sh" \) -print | rev | cut -d / -f1 | cut -d . -f 2- | rev
