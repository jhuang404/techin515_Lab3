
#ESP32 development board#
SSD1306 OLED display (128x64 pixels)
4 buttons (A, B, C, D) connected to pins 14, 27, 26, and 25

#Button Handling Mechanism Explained#
- Button State Detection: Reads the current state of all four buttons
- Debounce Processing: Uses a time delay (50ms) to ensure button signals are stable, preventing false triggers
- State Change Recognition: Identifies when a button state changes from high to low (press action)
- Response Recording: When a button is pressed, saves the corresponding choice (1-4) to the responses array
- Debug Output: Outputs the current question and user's chosen answer via the serial monitor
- Next Question Trigger: After a button press, triggers the nextQuestion() function to move to the next question

#Play with your sorting hat. Are all 10 questions important to create the sorting hat? If you were to remove some questions to improve user experience, which questions would you remove and justify your answer.#
- Not all 10 questions are equally important for creating an effective sorting hat experience. 
*Questions to Consider Removing:*
- Question 7: "Preferred pet?" - This question has minimal psychological correlation with personality traits that would determine house placement. The choice between Owl, Toad, Cat, and Phoenix is more about personal preference than core values.
- Question 3: "Favorite subject?" - While subject preference has some correlation with house traits, it's relatively superficial compared to questions about personal values and problem-solving approaches.
- Question 10: "Dream career?" - Career aspirations can be influenced by many external factors beyond personality traits. The correlation between wanting to be an Auror, Healer, Scholar, or Minister and house placement is somewhat arbitrary.

#If you were to improve the sorting hat, what technical improvements would you make? Consider:#
*How could you improve the model's accuracy or efficiency?*
*Feature Weighting:*
Implement weighted features to give greater importance to questions directly tied to core house values

*Ensemble Learning:*
Replace the single decision tree with an ensemble method like Random Forest

*Confidence Scores:*
Modify the model to output confidence percentages for each house to provide more nuanced sorting results, acknowledging that many wizards have traits from multiple houses

#What additional sensors or hardware could enhance the user experience?#
Use capacitive Touch Sensors to replace mechanical buttons with capacitive touch sensors for a more elegant interface.

#Does decision tree remain suitable for your choice of new sensors? If yes, carefully justify your answer. If not, what ML model would you use and explain why.#
If we're only using capacitive touch sensors as direct replacements for buttons (binary input), a decision tree remains suitable because the fundamental data structure doesn't change - we're still collecting categorical responses to questions.
Decision trees have low computational requirements, suitable for embedded systems like ESP32

