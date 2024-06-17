// Array to store days
const daysOfWeek = [
  "Sunday",
  "Monday",
  "Tuesday",
  "Wednesday",
  "Thursday",
  "Friday",
  "Saturday",
];

// Array to store months
const months = [
  "January",
  "February",
  "March",
  "April",
  "May",
  "June",
  "July",
  "August",
  "September",
  "October",
  "November",
  "December",
];

// Function for time
function getTime() {
  const now = new Date();
  const hour = now.getHours();
  const minute = now.getMinutes();
  const second = now.getSeconds();
  const day = daysOfWeek[now.getDay()];
  const date = now.getDate();
  const month = months[now.getMonth()];
  const year = now.getFullYear();

  // Format time as hour:minutes:seconds
  const timeString = `${hour.toString().padStart(2, "0")}:${minute
    .toString()
    .padStart(2, "0")}:${second.toString().padStart(2, "0")}`;
  const dateString = `${day}, ${month} ${date}, ${year}`;

  return `${timeString} ${dateString}`;
  // Return formatted time and date string
}

// Update clock every second
setInterval(() => {
  const clockElement = document.getElementById("clock");
  clockElement.innerHTML = getTime(); // Update clock display
}, 1000);
