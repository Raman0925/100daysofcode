const fs = require('fs');

// Read the content from the file
fs.readFile('./Day 23/note.txt', 'utf8', (err, data) => {
    if (err) {
        console.error('Error reading the file:', err);
        return;
    }

    // Trim the extra spaces between words
    const trimmedContent = data.replace(/\s+/g, ' ').trim();

    // Write the trimmed content back to the file
    fs.writeFile('./Day 23/note.txt', trimmedContent, 'utf8', (err) => {
        if (err) {
            console.error('Error writing the trimmed content to the file:', err);
            return;
        }

        console.log('Trimmed content has been written to note_trimmed.txt');
    });
});
