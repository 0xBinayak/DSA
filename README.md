# Cpp_DSA

# Quit Safari if running
killall Safari 2>/dev/null

# Remove Safari preferences
rm -f ~/Library/Preferences/com.apple.Safari.plist
rm -f ~/Library/Preferences/com.apple.Safari.Extensions.plist

# Remove Safari caches
rm -rf ~/Library/Caches/com.apple.Safari
rm -rf ~/Library/Caches/Metadata/Safari

# Remove Safari saved states
rm -rf ~/Library/Saved\ Application\ State/com.apple.Safari.savedState
rm -rf ~/Library/Autosave\ Information

# Remove Safari data (bookmarks, history, tabs, etc.)
rm -rf ~/Library/Safari

# Remove Safari cookies
rm -f ~/Library/Cookies/com.apple.Safari.SafeBrowsing.binarycookies

# Remove Website Data storage
rm -rf ~/Library/Containers/com.apple.Safari
rm -rf ~/Library/Containers/com.apple.SafariTechnologyPreview
rm -rf ~/Library/Group\ Containers/com.apple.Safari

echo "✅ Safari has been reset to default settings. Reopen Safari now."
