# Quit Safari if running
killall Safari 2>/dev/null

echo "🧹 Cleaning Safari data..."

# Preferences
sudo rm -f ~/Library/Preferences/com.apple.Safari.plist
sudo rm -f ~/Library/Preferences/com.apple.Safari.Extensions.plist

# Safari cache
sudo rm -rf ~/Library/Caches/com.apple.Safari
sudo rm -rf ~/Library/Caches/Metadata/Safari

# Saved states
sudo rm -rf ~/Library/Saved\ Application\ State/com.apple.Safari.savedState
sudo rm -rf ~/Library/Autosave\ Information

# Main Safari data (bookmarks, history, tabs, etc.)
sudo rm -rf ~/Library/Safari

# Cookies
sudo rm -f ~/Library/Cookies/com.apple.Safari.SafeBrowsing.binarycookies

# Website Data / Containers
sudo rm -rf ~/Library/Containers/com.apple.Safari
sudo rm -rf ~/Library/Containers/com.apple.SafariTechnologyPreview
sudo rm -rf ~/Library/Group\ Containers/com.apple.Safari

echo "✅ Safari has been fully reset. Reopen Safari to start fresh."
