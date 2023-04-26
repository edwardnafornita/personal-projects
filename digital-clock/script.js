// Get the current time in the user's timezone
function getCurrentTime() {
    return new Date();
}

// Get the time in a specific timezone
function getTimeInTimeZone(timezone) {
    const currentTime = new Date().toLocaleString('en-US', { timeZone: timezone });
    return new Date(currentTime);
}

// Format a date object to display hours, minutes, and seconds
function formatTime(date) {
    const hours = date.getHours().toString().padStart(2, '0');
    const minutes = date.getMinutes().toString().padStart(2, '0');
    const seconds = date.getSeconds().toString().padStart(2, '0');
    return `${hours}:${minutes}:${seconds}`;
}

// Update the clock display with the current time
function updateClock() {
    const timezoneSelect = document.getElementById('timezone');
    const selectedTimezone = timezoneSelect.options[timezoneSelect.selectedIndex].value;
    const currentTime = selectedTimezone === 'local' ? getCurrentTime() : getTimeInTimeZone(selectedTimezone);
    const formattedTime = formatTime(currentTime);
    document.getElementById('clock').textContent = formattedTime;
}

// Update the clock every second
setInterval(updateClock, 1000);